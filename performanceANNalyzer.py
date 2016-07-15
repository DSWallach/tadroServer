import copy
import string

testLength = 16

def score(testFile, checkFile):
    score = 0
    testF = open(testFile, 'r')
    checkF = open(checkFile, 'r')

    testLines = testF.readlines()
    checkLines = checkF.readlines()

    for i in range(1,len(checkLines)):
        checkBin = 0
        testBin = 0
    
        testValues = testLines[i].split(',');
        checkValues = checkLines[i].split(',');

        if (int(checkValues[4]) < -75):
            checkBin = 0
        elif (int(checkValues[4]) < -50):
            checkBin = 1
        elif (int(checkValues[4]) < -25):
            checkBin = 2
        elif (int(checkValues[4]) == 0):
            checkBin = 3
        elif (int(checkValues[4]) < 25):
            checkBin = 4
        elif (int(checkValues[4]) < 50):
            checkBin = 5
        elif (int(checkValues[4]) < 75):
            checkBin = 6
        else:
            checkBin = 7
            
        if (int(testValues[4]) < -75):
                testBin = 0
        elif (int(testValues[4]) < -50):
            testBin = 1
        elif (int(testValues[4]) < -25):
            testBin = 2
        elif (int(testValues[4]) == 0):
            testBin = 3
        elif (int(testValues[4]) < 25):
            testBin = 4
        elif (int(testValues[4]) < 50):
            testBin = 5
        elif (int(testValues[4]) < 75):
            testBin = 6
        else:
            testBin = 7

        score += (7 - abs(testBin - checkBin))
            
        if (int(checkValues[5]) == 0):
            checkBin = 0
        elif (int(checkValues[5]) < 25):
            checkBin = 1
        elif (int(checkValues[5]) < 50):
            checkBin = 2
        elif (int(checkValues[5]) < 100):
            checkBin = 3
        elif (int(checkValues[5]) < 125):
            checkBin = 4
        elif (int(checkValues[5]) < 150):
            checkBin = 5
        elif (int(checkValues[5]) < 175):
            checkBin = 6
        else:
            checkBin = 7

        if (int(testValues[5]) == 0):
            testBin = 0
        elif (int(testValues[5]) < 25):
            testBin = 1
        elif (int(testValues[5]) < 50):
            testBin = 2
        elif (int(testValues[5]) < 100):
            testBin = 3
        elif (int(testValues[5]) < 125):
            testBin = 4
        elif (int(testValues[5]) < 150):
            testBin = 5
        elif (int(testValues[5]) < 175):
            testBin = 6
        else:
            testBin = 7

        score += (7 - abs(testBin - checkBin))
            
    print('testFile: '+testFile+' Score: '+str(score));


for i in range(100):
    ideal = "idealPerformance.csv"
    testFile = str(i)+'output.csv'
    score(testFile,ideal);
score(ideal,ideal);
