} __packed FUN1(VAR1);

static struct sclp_ipl_info VAR2;

struct sclp_info VAR3;
FUN2(VAR3);

static int VAR4 FUN3(struct VAR5 *VAR6)
{
int VAR7;
sclp_cmdw_t VAR8[] = {VAR9,
VAR10};

for (VAR7 = 0; VAR7 < FUN4(VAR8); VAR7++) {
memset(VAR6, 0, sizeof(*VAR6));
VAR6->VAR11.VAR12 = sizeof(*VAR6);
VAR6->VAR11.VAR13 = 0x80;
VAR6->VAR11.VAR14[2] = 0x80;
if (FUN5(VAR8[VAR7], VAR6))
break;
if (VAR6->VAR11.VAR15 == 0x10)
return 0;
if (VAR6->VAR11.VAR15 != 0x1f0)
break;
}
return -VAR16;
}