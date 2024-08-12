#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SLEEP VAR4
#VAR1 <VAR5.VAR3>
#define SLEEP VAR6
int FUN1(int VAR7)
{
    fscanf(stdin, "", &VAR7);
    return VAR7;
}
void FUN2()
{
    int VAR7;
    VAR7 = -1;
    VAR7 = FUN1(VAR7);
    FUN3(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}