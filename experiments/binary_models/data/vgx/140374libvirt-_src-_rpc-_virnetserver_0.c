VAR1 *
FUN1(const char *VAR2,
unsigned long long VAR3,
size_t VAR4,
size_t VAR5,
size_t VAR6,
size_t VAR7,
size_t VAR8,
int VAR9,
unsigned int VAR10,
virNetServerClientPrivNew VAR11,
virNetServerClientPrivPreExecRestart VAR12,
virFreeCallback VAR13,
void *VAR14)
{
FUN2(VAR1) VAR15 = NULL;
g_autofree char *VAR16 = FUN3("", VAR2);

if (VAR7 < VAR8) {
FUN4(VAR17, "",
FUN5(""
""));
return NULL;
}

if (FUN6() < 0)
return NULL;

if (!(VAR15 = FUN7(VAR18)))
return NULL;

if (!(VAR15->VAR19 = FUN8(VAR4, VAR5,
VAR6,
VAR20,
VAR16,
NULL,
VAR15)))
return NULL;

VAR15->VAR2 = FUN9(VAR2);

VAR15->VAR3 = VAR3;
VAR15->VAR21 = VAR7;
VAR15->VAR22 = VAR8;
VAR15->VAR9 = VAR9;
VAR15->VAR10 = VAR10;
VAR15->VAR11 = VAR11;
VAR15->VAR12 = VAR12;
VAR15->VAR13 = VAR13;
VAR15->VAR14 = VAR14;

return FUN10(&VAR15);
}