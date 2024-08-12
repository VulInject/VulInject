#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 "" 
#define VAR5 ''
static const int VAR6 = 1; 
static const int VAR7 = 0; 
void FUN1()
{
    char * VAR8;
    VAR8 = (char *)malloc(100*sizeof(char));
    if (VAR8 == NULL) {FUN2(-1);}
    VAR8[0] = '';
    strcpy(VAR8, VAR4);
    if(VAR6)
    {
        for (; *VAR8 != ''; VAR8++)
        {
            if (*VAR8 == VAR5)
            {
                break;
            }
        }
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}