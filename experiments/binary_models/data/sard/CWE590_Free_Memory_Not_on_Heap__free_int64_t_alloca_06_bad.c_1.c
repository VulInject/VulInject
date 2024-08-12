#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    VAR5 * VAR6;
    VAR6 = NULL; 
    if(VAR4==5)
    {
        {
            VAR5 * VAR7 = (VAR5 *)FUN2(100*sizeof(VAR5));
            {
                size_t VAR8;
                for (VAR8 = 0; VAR8 < 100; VAR8++)
                {
                    VAR7[VAR8] = 5LL;
                }
            }
            VAR6 = VAR7;
        }
    }
    FUN3(VAR6[0]);
    free(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}