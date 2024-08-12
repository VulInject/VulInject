#VAR1 ""
void FUN1()
{
    while(1)
    {
        {
            char * VAR2 = (char *)FUN2(sizeof(char));
            char VAR3 = *VAR2; 
            FUN3(VAR3);
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}