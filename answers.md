# 7.1
The answers to exercise 7.1 is in the file ex7_1.md
# 7.2 (i)
The answers to 7.2 (i) is in the file MicroC/arrsum.c
# 7.2 (ii)
The answers to 7.2 (ii) is in the file MicroC/squares.c
# 7.2 (iii)
The answers to 7.2 (iii) is in the file MicroC/histogram.c
# 7.3
The answers to 7.3 is in the files:
CLex.fsl - where there is the word "for"
CPar.fsy - all places it says "FOR"
Absyn.fs - where it says ForLoop
Interp.fs - where the comment (* THIS IS EXERCISE 7.3 *) is at

Then we also had to change all files from 7.2 from while loops into for loops:
MicroC/arrsum.c
MicroC/squares_for_loop.c
MicroC/histogram_for_loop.c

# 7.4
The answers 7.4 is 
  | PreInc of access                 
  | PreDec of access                 
See Absyn.fs

    | PreInc acc -> let (loc, store1) = access acc locEnv gloEnv store 
                    let value = getSto store1 loc
                    let res = value + 1
                    (res, setSto store1 loc res)
    | PreDec acc -> let (loc, store1) = access acc locEnv gloEnv store 
                    let value = getSto store1 loc
                    let res = value - 1
                    (res, setSto store1 loc res)
See Interp.fs

# 7.5
The answers to 7.5 is 
  | "++"            { PREINC } 
  | "--"            { PREDEC }
In CLex.fsl

%right ASSIGN     
%left PREINC
%left PREDEC
In CPar.fs

And finally 
  | PREINC Access                       { PreInc($2)          }
  | PREDEC Access                       { PreDec($2)          }
In CPar.fsy

See preinc_predec_test.c and run it to verify
