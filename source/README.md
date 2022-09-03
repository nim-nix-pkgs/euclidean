# Euclidean

- [Euclidean Division and Euclidean Modulo](https://en.wikipedia.org/wiki/Euclidean_division) for [Nim.](https://nim-lang.org)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/2/22/Divmod.svg/461px-Divmod.svg.png "Euclidean Division and Euclidean Modulo for Nim (RED = Quotient, GREEN = Remainder)")

![](https://img.shields.io/github/languages/top/juancarlospaco/nim-euclidean?style=for-the-badge)
![](https://img.shields.io/github/languages/count/juancarlospaco/nim-euclidean?logoColor=green&style=for-the-badge)
![](https://img.shields.io/github/stars/juancarlospaco/nim-euclidean?style=for-the-badge "Star nim-euclidean onGitHub!")
![](https://img.shields.io/maintenance/yes/2019?style=for-the-badge "2019")
![](https://img.shields.io/github/languages/code-size/juancarlospaco/nim-euclidean?style=for-the-badge)
![](https://img.shields.io/github/issues-raw/juancarlospaco/nim-euclidean?style=for-the-badge "Bugs")
![](https://img.shields.io/github/issues-pr-raw/juancarlospaco/nim-euclidean?style=for-the-badge "PRs")
![](https://img.shields.io/github/commit-activity/y/juancarlospaco/nim-euclidean?style=for-the-badge)
![](https://img.shields.io/github/last-commit/juancarlospaco/nim-euclidean?style=for-the-badge "Commits")


# Use

```nim
import euclidean

echo euclideanDivision(-3, 5)  # -3 / 5
echo euclideanModulo(-3, 5)    # -3 mod 5
```

- You can use `import euclideanDivision as eDiv` or similar for short name, etc.
- You can use `import euclideanModulo as eMod` or similar for short name, etc.
- Remember results will be different than standard library `system` Divison and Modulo.
- Remember results will be different than standard library `math` Divison and Modulo.
- No dependencies. Uses `limits.h`.
- See http://wikipedia.org/wiki/Modulo_operation http://wikipedia.org/wiki/Euclidean_division


# FAQ

- This already exists in the Standard Library on `math.floorDiv`, `math.floorMod` ?
- This already exists in the Standard Library on `system./`, `system.mod` ?

**Nim**
```nim
from math import floorDiv, floorMod

echo "system.`/` Versus euclidean.euclideanDivision:"
echo "\tEuclideans Division\t-3 / 5 =\t",     euclideanDivision(-3.cint, 5.cint)
echo "\tNim StdLib Division\t-3 / 5 = \t",    -3.cint / 5.cint, "\n"

echo "system.`mod` Versus euclidean.euclideanModulo:"
echo "\tEuclideans Modulo\t-3 mod 5 =\t",     euclideanModulo(-3.cint, 5.cint)
echo "\tNim StdLib Modulo\t-3 mod 5 =\t",     -3.cint mod 5.cint, "\n\n"

echo "math.floorDiv Versus euclidean.euclideanDivision:"
echo "\tEuclideans Division\t5 / -3 =\t",     euclideanDivision(5.cint, -3.cint)
echo "\tNim Floor  Division\t5 / -3 = \t",    floorDiv(5, -3), "\n"

echo "math.floorMod Versus euclidean.euclideanModulo:"
echo "\tEuclideans Modulo\t5 mod -3 =\t",     euclideanModulo(5.cint, -3.cint)
echo "\tNim Floor  Modulo\t5 mod -3 = \t",    floorMod(5, -3)
```

**Results**
```
system.`/` Versus euclidean.euclideanDivision:
        Euclideans Division     -3 / 5 =        -1
        Nim StdLib Division     -3 / 5 =        -0.6

system.`mod` Versus euclidean.euclideanModulo:
        Euclideans Modulo       -3 mod 5 =      2
        Nim StdLib Modulo       -3 mod 5 =      -3


math.floorDiv Versus euclidean.euclideanDivision:
        Euclideans Division     5 / -3 =        -1
        Nim Floor  Division     5 / -3 =        -2

math.floorMod Versus euclidean.euclideanModulo:
        Euclideans Modulo       5 mod -3 =      2
        Nim Floor  Modulo       5 mod -3 =      -1
```


# Stars

![Star nim-euclidean on GitHub](https://starchart.cc/juancarlospaco/nim-euclidean.svg "Star nim-euclidean on GitHub!")
