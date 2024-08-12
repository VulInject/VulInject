#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
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
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}