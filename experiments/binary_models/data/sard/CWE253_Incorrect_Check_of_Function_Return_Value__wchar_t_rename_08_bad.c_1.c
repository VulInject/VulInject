#VAR1 ""
#VAR1 <VAR2.VAR3>
#define RENAME VAR4
#define RENAME VAR5
#define OLD_BAD_FILE_NAME name_0 OLD_GOOD_FILE_NAME name_1 NEW_BAD_FILE_NAME name_2 NEW_GOOD_FILE_NAME VAR6 FUN1()
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
        if (FUN4(VAR7, VAR8) == 0)
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}