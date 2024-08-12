#VAR1 ""
typedef struct VAR2
{
    struct VAR2 *VAR3;
    struct VAR2 *VAR4;
} VAR5;
typedef struct name_0    linkedList VAR6;
} VAR7;
static VAR5 *VAR8, *VAR9;
int VAR10 = 1; 
int VAR11 = 0; 
void FUN1()
{
    name_1 VAR12;
    linkedList VAR13 = { &VAR13, &VAR13 };
    VAR12.VAR6.VAR3 = VAR13.VAR3;
    VAR12.VAR6.VAR4 = VAR13.VAR4;
    VAR13.VAR3 = &VAR12.VAR6;
    VAR13.VAR4 = &VAR12.VAR6;
    if(VAR10)
    {
        if (fgets((char*)&VAR12, sizeof(VAR12), stdin) == NULL)
        {
            FUN2(1);
        }
    }
    VAR8 = VAR12.VAR6.VAR4;
    VAR9 = VAR12.VAR6.VAR3;
    VAR8->VAR3 = VAR9;
    VAR9->VAR4 = VAR8;
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}