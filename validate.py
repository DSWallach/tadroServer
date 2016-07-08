#!/usr/bin/python2.7
import sys

sys.path.insert(0, '/home/david/Documents/tadroServer/tadroEvolver')
sys.path.insert(0, '/home/david/Documents/tadroServer/T16ANNalyzer')

import generations as gen
from graphQ import graphQ
from tadroANN import tadroANN 
from landroANN import landroANN
from copy import deepcopy
import random

# The number of nodes in each layer of the ANN
inputs = 50
hidden = 50
outputs = 50

numIDs = 100
evoRun = 0
sparsity = .9
pop = 0
test = 5
seed = 1234
Fitnesses = [100, 100, 100, 100, 100, 100]
MutationRates = [0, 0.25, 0.5, 0.75, 1]
Sparsities = [0, 0.25, 0.5, 0.75, 1]

inputs = 4
hidden = 12
outputs = 3

filenames = ['Qsparsity00.csv','Qsparsity01.csv', 'Qsparsity02.csv',
                 'Qsparsity03.csv','Qsparsity04.csv', 'Qsparsity05.csv',
                 'Qsparsity06.csv','Qsparsity07.csv', 'Qsparsity08.csv',
                 'Qsparsity09.csv']
random.seed(seed)
sparsity = 0
#for i in range(10):
#    filename = filenames[i]
f = open("testSpar09.csv", 'w')
#    spar = 
#    f.write(str(filename)+'\n')
#    f.write('Network ID, Q score\n')
#    print('Generating sparsity: '+str(i)+'\n')
for j in range(10000):
    tann = tadroANN(0,0,0,j,0.9,inputs,hidden,outputs)
    newGraph = graphQ()
    qScore = newGraph.calcTadroQ(tann)
    f.write(str(newGraph.edges)+', '+str(qScore)+'\n')
#    sparsity += 0.1
f.close()
        

#for ann in generation:
#    graph = graphQ()
#    qScores.append([ann.ID,graph.calcTadroQ(ann)])
#print(qScores)

#lann = landroANN(0,'ladroTest.txt')
#print(lann)
