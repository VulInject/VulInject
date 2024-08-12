static void
FUN1(VAR1 *VAR2,
const VAR3 *VAR4, const void *VAR5)
{
uint8_t VAR6;

VAR6 = FUN2(VAR2->VAR7->VAR8[VAR2->VAR9 + 4], 4, 0) + 1;
if (VAR6 == 0) {
return;
}

for (uint8_t VAR10 = 0; VAR10 < VAR6; VAR10++) {
char VAR11[32], VAR12[128];
pcieadm_cfgspace_print_t VAR13;

(void) snprintf(VAR11, sizeof (VAR11), "",
VAR4->VAR14, VAR10);
(void) snprintf(VAR12, sizeof (VAR12), "",
VAR4->VAR15, VAR10);

VAR13.VAR16 = VAR4->VAR16 + VAR10;
VAR13.VAR17 = 1;
VAR13.VAR14 = VAR11;
VAR13.VAR15 = VAR12;
VAR13.VAR18 = VAR19;
VAR13.VAR20 = NULL;

VAR13.FUN3(VAR2, &VAR13, VAR13.VAR20);
}
}


static const pcieadm_regdef_t VAR21[] = {
{ 0, 0, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 1, 1, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 2, 2, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 3, 3, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 4, 4, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 5, 5, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 6, 6, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 7, 7, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 8, 8, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } }, },
{ 9, 9, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } }, },
{ 10, 10, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ -1, -1, NULL }
};

static const pcieadm_regdef_t VAR25[] = {
{ 0, 0, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } }, },
{ 3, 3, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } }, },
{ 4, 4, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } }, },
{ 5, 5, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } }, },
{ 7, 7, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } }, },
{ 8, 8, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } }, },
{ 9, 10, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "", "",
"" } } },
{ 11, 11, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 12, 12, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 13, 13, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 14, 14, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 15, 15, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ -1, -1, NULL }
};


static const pcieadm_regdef_t VAR26[] = {
{ 16, 23, "", "", VAR27 },
{ 7, 15, "", "", VAR27 },
{ 0, 7, "", "", VAR27 },
{ -1, -1, NULL }
};

static const pcieadm_regdef_t VAR28[] = {
{ 0, 3, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 4, 7, "", "", VAR27,
.VAR23 = { .VAR29 = { 12 } } },
{ -1, -1, NULL }
};

static const pcieadm_regdef_t VAR30[] = {
{ 0, 3, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 4, 7, "", "", VAR27,
.VAR23 = { .VAR29 = { 12, 0xfff } } },
{ -1, -1, NULL }
};


static const pcieadm_regdef_t VAR31[] = {
{ 5, 5, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 7, 7, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 8, 8, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 9, 10, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "", "" } } },
{ 11, 11, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 12, 12, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 13, 13, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 14, 14, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 15, 15, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ -1, -1, NULL }
};

static const pcieadm_regdef_t VAR32[] = {
{ 4, 16, "", "", VAR27,
.VAR23 = { .VAR29 = { 20 } } },
{ -1, -1, NULL }
};

static const pcieadm_regdef_t VAR33[] = {
{ 4, 16, "", "", VAR27,
.VAR23 = { .VAR29 = { 20, 0xfffff } } },
{ -1, -1, NULL }
};

static const pcieadm_regdef_t VAR34[] = {
{ 0, 3, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 4, 16, "", "", VAR27,
.VAR23 = { .VAR29 = { 20 } } },
{ -1, -1, NULL }
};

static const pcieadm_regdef_t VAR35[] = {
{ 0, 3, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 4, 16, "", "", VAR27,
.VAR23 = { .VAR29 = { 20, 0xfffff } } },
{ -1, -1, NULL }
};

static const pcieadm_regdef_t VAR36[] = {
{ 0, 0, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 1, 1, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 2, 2, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 3, 3, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 4, 4, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 5, 5, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 6, 6, "", "", VAR27 },
{ 7, 7, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 8, 8, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 9, 9, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 10, 10, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ 11, 11, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ -1, -1, NULL }
};

static pcieadm_unitdef_t VAR37 = {
"", 4
};

static pcieadm_unitdef_t VAR38 = { "" };

static const pcieadm_regdef_t VAR39[] = {
{ 0, 6, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "", "" } } },
{ 7, 7, "", "", VAR22,
.VAR23 = { .VAR24 = { "", "" } } },
{ -1, -1, NULL }
};