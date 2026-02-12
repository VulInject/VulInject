LJFOLD(BROR any KINT)
LJFOLDF(simplify_shift_ik)
{
int32_t mask = irt_is64(fins->t) ? 63 : 31;
int32_t k = (fright->i & mask);
if (k == 0)  
return LEFTFOLD;
if (k == 1 && fins->o == IR_BSHL) {  
fins->o = IR_ADD;
fins->op2 = fins->op1;
return RETRYFOLD;
}
if (k != fright->i) {  
fins->op2 = (IRRef1)lj_ir_kint(J, k);
return RETRYFOLD;
}
if (fins->o == IR_BROR) {  
fins->o = IR_BROL;
fins->op2 = (IRRef1)lj_ir_kint(J, (-k)&mask);
return RETRYFOLD;
}
return NEXTFOLD;
}