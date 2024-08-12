#VAR1 ""
void FUN1()
{
    if(VAR2)
    {
        {
            char * VAR3 = (char *)FUN2(sizeof(char));
            char VAR4 = *VAR3; 
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}