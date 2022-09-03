
#include <limits.h>  // INT_MIN

int euclideanDivision(int be_divided, int divide_by);
int euclideanModulo(int be_divided, int divide_by);

int euclideanDivision(int be_divided, int divide_by) {
    int var0, var1;
    if (be_divided >= 0) {
        if (divide_by >= 0) {
            return be_divided / divide_by;
        } else if (divide_by != INT_MIN) {
            var0 = -( be_divided / -divide_by ), var1 = be_divided % -divide_by;
        } else {
            var0 = 0, var1 = be_divided;
        }
    } else if (be_divided != INT_MIN) {
        if (divide_by >= 0) {
            var0 = -( -be_divided / divide_by ), var1 = -( -be_divided % divide_by );
        } else if (divide_by != INT_MIN) {
            var0 = -be_divided / -divide_by, var1 = -( -be_divided % -divide_by );
        } else {
            var0 = 1, var1 = be_divided-var0 * divide_by;
        }
    } else if (divide_by >= 0) {
        var0 = -( -(be_divided + divide_by) / divide_by ) - 1, var1 = -( -(be_divided + divide_by) % divide_by);
    } else {
        var0 = -(be_divided - divide_by) / -divide_by + 1, var1 = -( -(be_divided - divide_by) % -divide_by);
    }
    if (var1 >= 0) {
        return var0;
    } else {
        return var0 + (divide_by > 0 ? -1 : 1);
    }
}

int euclideanModulo(int be_divided, int divide_by) {
    int var1 = be_divided % divide_by;
    if (var1 >= 0) {
        return var1;
    } else {
        return var1 + (divide_by > 0 ? divide_by : -divide_by);
    }
}
