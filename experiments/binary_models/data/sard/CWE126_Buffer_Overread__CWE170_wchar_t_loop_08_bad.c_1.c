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
            wchar_t VAR4[150], VAR5[100];
            int VAR6;
            wmemset(VAR4, VAR7'', 149);
            VAR4[149] = VAR7'';
            for(VAR6=0; VAR6 < 99; VAR6++)
            {
                VAR5[VAR6] = VAR4[VAR6];
            }
            FUN4(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}