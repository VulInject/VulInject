#VAR1 ""
#define DEST_SIZE 10
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            char VAR2[VAR3];
            char *VAR4;
            VAR4 = gets(VAR2);
            if (VAR4 == NULL)
            {
                FUN4(1);
            }
            VAR2[VAR3-1] = '';
            FUN5(VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}