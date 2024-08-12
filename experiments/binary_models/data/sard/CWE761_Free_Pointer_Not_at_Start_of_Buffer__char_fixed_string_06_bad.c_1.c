#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 "" 
#define VAR5 ''
static const int VAR6 = 5;
void FUN1()
{
    char * VAR7;
    VAR7 = (char *)malloc(100*sizeof(char));
    if (VAR7 == NULL) {FUN2(-1);}
    VAR7[0] = '';
    strcpy(VAR7, VAR4);
    if(VAR6==5)
    {
        for (; *VAR7 != ''; VAR7++)
        {
            if (*VAR7 == VAR5)
            {
                break;
            }
        }
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}