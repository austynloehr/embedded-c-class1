extern int mainPrivateData; // Need to declare this variable first, extern says that it is declared in another file

void file1_myFun1(void){
    mainPrivateData = 300;

}