static int clk_dyn_rcg_set_parent(struct clk_hw *hw, u8 index)
{
struct clk_dyn_rcg *rcg = to_clk_dyn_rcg(hw);
u32 ns, md, reg;
int bank;
struct freq_tbl f = { 0 };
bool banked_mn = !!rcg->mn[1].width;
bool banked_p = !!rcg->p[1].pre_div_width;

regmap_read(rcg->clkr.regmap, rcg->bank_reg, &reg);
bank = reg_to_bank(rcg, reg);

regmap_read(rcg->clkr.regmap, rcg->ns_reg[bank], &ns);

if (banked_mn) {
regmap_read(rcg->clkr.regmap, rcg->md_reg[bank], &md);
f.m = md_to_m(&rcg->mn[bank], md);
f.n = ns_m_to_n(&rcg->mn[bank], ns, f.m);
}

if (banked_p)
f.pre_div = ns_to_pre_div(&rcg->p[bank], ns) + 1;

f.src = qcom_find_src_index(hw, rcg->s[bank].parent_map, index);
return configure_bank(rcg, &f);
}