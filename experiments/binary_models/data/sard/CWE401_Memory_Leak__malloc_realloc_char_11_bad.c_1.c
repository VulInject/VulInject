#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            char * VAR4 = (char *)malloc(100*sizeof(char));
            if (VAR4 == NULL) {FUN3(-1);}
            strcpy(VAR4, "");
            FUN4(VAR4);
            VAR4 = (char *)realloc(VAR4, (130000)*sizeof(char));
            if (VAR4 != NULL)
            {
                strcpy(VAR4, "");
                FUN4(VAR4);
                free(VAR4);
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