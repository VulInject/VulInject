static void add_reg_change(REsilTrace *trace, int idx, RRegItem *ri, ut64 data) {
r_return_if_fail (trace && ri);
ut64 addr = ri->offset | (ri->arena << 16);
RVector *vreg = ht_up_find (trace->registers, addr, NULL);
if (!vreg) {
vreg = r_vector_new (sizeof (REsilRegChange), NULL, NULL);
if (!vreg) {
R_LOG_ERROR ("creating a register vector");
return;
}
ht_up_insert (trace->registers, addr, vreg);
}
REsilRegChange reg = { idx, data };
r_vector_push (vreg, &reg);
}