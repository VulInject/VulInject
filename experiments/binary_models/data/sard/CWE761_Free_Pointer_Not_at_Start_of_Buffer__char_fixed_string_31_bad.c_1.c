#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 "" 
#define VAR5 ''
void FUN1()
{
    char * VAR6;
    VAR6 = (char *)malloc(100*sizeof(char));
    if (VAR6 == NULL) {FUN2(-1);}
    VAR6[0] = '';
    strcpy(VAR6, VAR4);
    {
        char * VAR7 = VAR6;
        char * VAR6 = VAR7;
        for (; *VAR6 != ''; VAR6++)
        {
            if (*VAR6 == VAR5)
            {
                break;
            }
        }
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}