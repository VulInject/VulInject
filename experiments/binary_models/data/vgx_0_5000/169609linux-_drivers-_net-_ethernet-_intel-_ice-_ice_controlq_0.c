static u16 ice_clean_sq(struct ice_hw *hw, struct ice_ctl_q_info *cq)
{
struct ice_ctl_q_ring *sq = &cq->sq;
u16 ntc = sq->next_to_clean;
struct ice_sq_cd *details;
struct ice_aq_desc *desc;

desc = ICE_CTL_Q_DESC(*sq, ntc);
details = ICE_CTL_Q_DETAILS(*sq, ntc);

while (rd32(hw, cq->sq.head) != ntc) {
ice_debug(hw, ICE_DBG_AQ_MSG, "ntc %d head %d.\n", ntc, rd32(hw, cq->sq.head));
memset(desc, 0, sizeof(*desc));
memset(details, 0, sizeof(*details));
ntc++;
if (ntc == sq->count)
ntc = 0;
desc = ICE_CTL_Q_DESC(*sq, ntc);
details = ICE_CTL_Q_DETAILS(*sq, ntc);
}

sq->next_to_clean = ntc;

return ICE_CTL_Q_DESC_UNUSED(sq);
}