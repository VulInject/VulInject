#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
    goto VAR4;
VAR4:
    ; 
    goto VAR5;
VAR5:
    {
        int VAR6;
        for(VAR6=0; VAR6<10; VAR6++)
        {
            FUN3(VAR3[VAR6].VAR7);
            FUN3(VAR3[VAR6].VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}