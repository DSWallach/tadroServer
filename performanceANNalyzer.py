import copy
import string

testLength = 4

def basicScore(testFile, checkFile):
    score = 0
    testF = open(testFile, 'r')
    checkF = open(checkFile, 'r')
    testLines = testF.readlines()
    checkLines = checkF.readlines()
    maxScore = 0
    for i in range(0,len(checkLines)):
        checkBin = 0
        testBin = 0
        testValues = testLines[i].split(',');
        checkValues = checkLines[i].split(',');
        if (int(checkValues[4]) == 0):
            checkBin = 0
        else:
            checkBin = 1

        if (int(testValues[4]) == 0):
            testBin = 0
        else:
            testBin = 1
            
        if (checkBin == testBin):
            score += 1
        else:
            score -= 1

        if (int(checkValues[5]) == 0):
            checkBin = 0
        else:
            checkBin = 1

        if (int(testValues[5]) == 0):
            testBin = 0
        else:
            testBin = 1

        if (testBin == checkBin):
            score += 1
        else:
            score -= 1
    return score
            

def simpleScore(testFile, checkFile):
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
        if (int(checkValues[4]) < 0):
            checkBin = 0
        elif (int(checkValues[4]) == 0):
            checkBin = 1
        elif (int(checkValues[4]) > 0):
            checkBin = 2

        if (int(testValues[4]) < 0):
            testBin = 0
        elif (int(testValues[4]) == 0):
            testBin = 1
        elif (int(testValues[4]) > 0):
            testBin = 2
            
        if (testBin == checkBin):
            score += 1

        if (int(checkValues[5]) < 0):
            checkBin = 0
        elif (int(checkValues[5]) == 0):
            checkBin = 1
        elif (int(checkValues[5]) > 0):
            checkBin = 2

        if (int(testValues[5]) < 0):
            testBin = 0
        elif (int(testValues[5]) == 0):
            testBin = 1
        elif (int(testValues[5]) > 0):
            testBin = 2

        if (testBin == checkBin):
            score += 1
    return score
            
def score(testFile, checkFile):
    score = 0
    testF = open(testFile, 'r')
    try:
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

            score += (4 - abs(testBin - checkBin))
            
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

            score += (4 - abs(testBin - checkBin))
        return score
    except IOError:
        print("no file")
        return 0
        
print("ID,testScore");
log = open("netPerflog.csv", 'w')
ideal = "idealInput.csv"
maxScore = basicScore(ideal,ideal)
log.write('Maxscore: '+str(maxScore))
for i in range(100000):
    testFile = 'testFiles/'+str(i)+'output.csv'
    testScore = score(testFile,ideal);
    log.write(str(i)+','+str(testScore)+'\n')
    print(str(i)+','+str(testScore))

score(ideal,ideal);
