#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL; 
    if(VAR6==5)
    {
        {
            VAR4 * VAR7 = (VAR4 *)FUN2(100*sizeof(VAR4));
            {
                size_t VAR8;
                for (VAR8 = 0; VAR8 < 100; VAR8++)
                {
                    VAR7[VAR8].VAR9 = 1;
                    VAR7[VAR8].VAR10 = 1;
                }
            }
            VAR5 = VAR7;
        }
    }
    FUN3(&VAR5[0]);
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}