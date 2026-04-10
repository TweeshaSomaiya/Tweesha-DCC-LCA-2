# Bully Election Algorithm

## Aim
To implement the Bully Election Algorithm for selecting a coordinator.

## Description
The Bully Algorithm is used in distributed systems where the process with the highest ID becomes the coordinator.

## Steps
1. Input number of processes
2. Assign active/failed status
3. Select a process to start election
4. Send election message to higher processes
5. Highest active process becomes coordinator

## Output
The program successfully elects the highest active process.

## Conclusion
The Bully Algorithm works efficiently for small systems but has high message overhead.