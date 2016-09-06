echo off

echo test triangle is normal
triangle.exe 4 3 2 > normalTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b normalTriangle.txt standart/NormalTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo test triangle is isosceles
triangle.exe 6 6 2 > isoscelesTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b isoscelesTriangle.txt standart/IsoscelesTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo test triangle is equilateral
triangle.exe 6 6 6 > equilateralTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b equilateralTriangle.txt standart/EquilateralTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo test side is float
triangle.exe 6,1 6,1 6,6 > isoscelesTriangleFloat.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b isoscelesTriangleFloat.txt standart/IsoscelesTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo test not Triangle
triangle.exe 1 1 2 > notTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b notTriangle.txt standart/NotTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo test side a is zero
triangle.exe 0 1 2 > aZero.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b aZero.txt standart/NotTriangle.txt
IF ERRORLEVEL 1 GOTO testFailed

echo test side b is negative
triangle.exe 1 -1 2 > bNegative.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b bNegative.txt standart/ErrorInputData.txt
IF ERRORLEVEL 1 GOTO testFailed

echo test side not number
triangle.exe b 1 2 > notNumber.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b notNumber.txt standart/ErrorInputData.txt
IF ERRORLEVEL 1 GOTO testFailed


echo test 3 input data
triangle.exe 1  2 > littleInput.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b littleInput.txt standart/ErrorInputData.txt
IF ERRORLEVEL 1 GOTO testFailed

echo test excess input data
triangle.exe 3 4 5 5 5 > excessInput.txt
IF ERRORLEVEL 1 GOTO testFailed
fc /b excessInput.txt standart/ErrorInputData.txt
IF ERRORLEVEL 1 GOTO testFailed

echo OK
pause
exit /b

:testFailed
echo Testing Failed
pause
exit /b