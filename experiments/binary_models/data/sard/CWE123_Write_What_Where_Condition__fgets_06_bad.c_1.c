#VAR1 ""
typedef struct VAR2
{
    struct VAR2 *VAR3;
    struct VAR2 *VAR4;
} VAR5;
typedef struct name_0    linkedList VAR6;
} VAR7;
static VAR5 *VAR8, *VAR9;
static const int VAR10 = 5;
void FUN1()
{
    name_1 VAR11;
    linkedList VAR12 = { &VAR12, &VAR12 };
    VAR11.VAR6.VAR3 = VAR12.VAR3;
    VAR11.VAR6.VAR4 = VAR12.VAR4;
    VAR12.VAR3 = &VAR11.VAR6;
    VAR12.VAR4 = &VAR11.VAR6;
    if(VAR10==5)
    {
        if (fgets((char*)&VAR11, sizeof(VAR11), stdin) == NULL)
        {
            FUN2(1);
        }
    }
    VAR8 = VAR11.VAR6.VAR4;
    VAR9 = VAR11.VAR6.VAR3;
    VAR8->VAR3 = VAR9;
    VAR9->VAR4 = VAR8;
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}