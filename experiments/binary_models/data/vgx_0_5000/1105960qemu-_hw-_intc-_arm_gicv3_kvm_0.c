static void arm_gicv3_icc_reset(CPUARMState *env, const ARMCPRegInfo *ri)
{
GICv3State *s;
GICv3CPUState *c;

c = (GICv3CPUState *)env->gicv3state;
s = c->gic;

c->icc_pmr_el1 = 0;
c->icc_bpr[GICV3_G0] = GIC_MIN_BPR;
c->icc_bpr[GICV3_G1] = GIC_MIN_BPR;
c->icc_bpr[GICV3_G1NS] = GIC_MIN_BPR;

c->icc_sre_el1 = 0x7;
memset(c->icc_apr, 0, sizeof(c->icc_apr));
memset(c->icc_igrpen, 0, sizeof(c->icc_igrpen));

if (s->migration_blocker) {
return;
}


kvm_device_access(s->dev_fd, KVM_DEV_ARM_VGIC_GRP_CPU_SYSREGS,
KVM_VGIC_ATTR(ICC_CTLR_EL1, c->gicr_typer),
&c->icc_ctlr_el1[GICV3_NS], false, &error_abort);

c->icc_ctlr_el1[GICV3_S] = c->icc_ctlr_el1[GICV3_NS];
}