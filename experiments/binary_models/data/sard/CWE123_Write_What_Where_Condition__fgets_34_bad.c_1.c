#VAR1 ""
typedef struct VAR2
{
    struct VAR2 *VAR3;
    struct VAR2 *VAR4;
} VAR5;
typedef struct name_0    linkedList VAR6;
} VAR7;
static VAR5 *VAR8, *VAR9;
typedef union
{
    name_1 VAR10;
    name_1 VAR11;
} VAR12;
void FUN1()
{
    name_1 VAR13;
    CWE123_Write_What_Where_Condition__fgets_34_unionType VAR14;
    linkedList VAR15 = { &VAR15, &VAR15 };
    VAR13.VAR6.VAR3 = VAR15.VAR3;
    VAR13.VAR6.VAR4 = VAR15.VAR4;
    VAR15.VAR3 = &VAR13.VAR6;
    VAR15.VAR4 = &VAR13.VAR6;
    if (fgets((char*)&VAR13, sizeof(VAR13), stdin) == NULL)
    {
        FUN2(1);
    }
    VAR14.VAR10 = VAR13;
    {
        name_1 VAR13 = VAR14.VAR11;
        VAR8 = VAR13.VAR6.VAR4;
        VAR9 = VAR13.VAR6.VAR3;
        VAR8->VAR3 = VAR9;
        VAR9->VAR4 = VAR8;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}