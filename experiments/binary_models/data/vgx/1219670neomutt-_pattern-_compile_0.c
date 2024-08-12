static bool FUN1(struct VAR1 *VAR2, PatternCompFlags VAR3,
struct VAR4 *VAR5, struct VAR4 *VAR6)
{
char *VAR7 = NULL;
bool VAR8 = false;
bool VAR9 = false;


if (*VAR5->VAR10 == '')
{
VAR5->VAR10++;
VAR9 = true;
}
if (*VAR5->VAR10 == '')
VAR8 = true;
if ((*VAR5->VAR10 != '') && (*VAR5->VAR10 != ''))
{

if (*VAR5->VAR10 == '')
{
VAR2->VAR11 = VAR12;
VAR2->VAR13 = FUN2(VAR5->VAR10 + 1, &VAR7, 0) + 1; 
}
else
VAR2->VAR13 = FUN2(VAR5->VAR10, &VAR7, 0);
if (FUN3((unsigned char) *VAR7) == '') 
{
VAR2->VAR13 *= 1024;
VAR7++;
}
else if (FUN3((unsigned char) *VAR7) == '')
{
VAR2->VAR13 *= 1048576;
VAR7++;
}
if (*VAR5->VAR10 == '')
{
VAR5->VAR10 = VAR7;
return true;
}
if (*VAR7 != '')
{

VAR2->VAR11 = VAR2->VAR13;
VAR5->VAR10 = VAR7;
return true;
}
VAR7++;
}
else
{
VAR5->VAR10++;
VAR7 = VAR5->VAR10;
}

if (FUN4((unsigned char) *VAR7))
{

VAR2->VAR11 = FUN2(VAR7, &VAR7, 0);
if (FUN3((unsigned char) *VAR7) == '')
{
VAR2->VAR11 *= 1024;
VAR7++;
}
else if (FUN3((unsigned char) *VAR7) == '')
{
VAR2->VAR11 *= 1048576;
VAR7++;
}
if (VAR8)
(VAR2->VAR11)--;
}
else
VAR2->VAR11 = VAR12;

if (VAR9 && (*VAR7 == ''))
VAR7++;

FUN5(VAR7);
VAR5->VAR10 = VAR7;
return true;
}