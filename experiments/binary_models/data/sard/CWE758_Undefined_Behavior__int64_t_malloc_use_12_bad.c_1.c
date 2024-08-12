#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
            if (VAR3 == NULL) {FUN3(-1);}
            int64_t VAR4 = *VAR3; 
            free(VAR3);
            FUN4(VAR4);
        }
    }
    else
    {
        {
            int64_t VAR4;
            VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
            if (VAR3 == NULL) {FUN3(-1);}
            VAR4 = 5LL;
            *VAR3 = VAR4; 
            {
                int64_t VAR4 = *VAR3;
                FUN4(VAR4);
            }
            free(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}