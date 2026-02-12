static void npcm7xx_gcr_enter_reset(Object *obj, ResetType type)
{
NPCM7xxGCRState *s = NPCM7XX_GCR(obj);

QEMU_BUILD_BUG_ON(sizeof(s->regs) != sizeof(cold_reset_values));

switch (type) {
case RESET_TYPE_COLD:
memcpy(s->regs, cold_reset_values, sizeof(s->regs));
s->regs[NPCM7XX_GCR_PWRON] = s->reset_pwron;
s->regs[NPCM7XX_GCR_MDLR] = s->reset_mdlr;
s->regs[NPCM7XX_GCR_INTCR3] = s->reset_intcr3;
break;
}
}