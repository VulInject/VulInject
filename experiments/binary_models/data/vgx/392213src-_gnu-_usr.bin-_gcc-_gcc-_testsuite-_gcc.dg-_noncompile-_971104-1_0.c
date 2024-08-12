void *VAR1;
};
static union semun VAR2;
static int VAR3;
static void FUN1(int VAR4){
struct sembuf VAR5;
VAR5.VAR6 = (unsigned short) VAR4;
VAR5.VAR7  = 1;         
VAR5.VAR8 = 0x1000 ;  
if(FUN2(VAR3, &VAR5, 1) == -1) FUN3("");
if(FUN4(VAR3, VAR5.VAR6, 12 , VAR2) == 0)
FUN5("",
({ "", "", "", "",
"", "", "", "",
""}	 
[( VAR5.VAR6 )]) );
}