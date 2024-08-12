#VAR1 ""
#VAR1 <VAR2.VAR3>
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
            char * VAR4 = (char *)malloc(100*sizeof(char));
            if (VAR4 == NULL) {FUN4(-1);}
            strcpy(VAR4, "");
            FUN5(VAR4);
            VAR4 = (char *)realloc(VAR4, (130000)*sizeof(char));
            if (VAR4 != NULL)
            {
                strcpy(VAR4, "");
                FUN5(VAR4);
                free(VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}