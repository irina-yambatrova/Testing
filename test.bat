echo off

echo Test triangle is normal
triangle.exe 4 3 2 > normalTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b normalTriangle.txt standart/NormalTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo Test triangle is isosceles
triangle.exe 6 6 2 > isoscelesTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b isoscelesTriangle.txt standart/IsoscelesTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo Test triangle is equilateral
triangle.exe 6 6 6 > equilateralTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b equilateralTriangle.txt standart/EquilateralTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo Test not Triangle
triangle.exe 1 1 2 > notTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b notTriangle.txt standart/NotTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo Test side b is negative
triangle.exe 1 -1 2 > bNegative.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b bNegative.txt standart/ErrorInputData.txt
IF ERRORLEVEL 1 GOTO testFailed


echo Test 3 input data
triangle.exe 1  2 > littleInput.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b littleInput.txt standart/ErrorInputData.txt
IF ERRORLEVEL 1 GOTO testFailed


echo OK
pause
exit /b

:testFailed
echo Testing Failed
pause
exit /b