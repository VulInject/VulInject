#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            char * VAR2 = (char *)FUN3(sizeof(char));
            char VAR3 = *VAR2; 
            FUN4(VAR3);
        }
    }
    else
    {
        {
            char VAR3;
            char * VAR2 = (char *)FUN3(sizeof(char));
            VAR3 = 5;
            *VAR2 = VAR3; 
            {
                char VAR3 = *VAR2;
                FUN4(VAR3);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}