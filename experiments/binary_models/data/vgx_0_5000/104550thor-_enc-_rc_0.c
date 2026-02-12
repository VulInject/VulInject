void init_rate_control_per_sequence(rate_control_t *rc, int target_bits, int num_sb){

rc->num_sb = num_sb;    
rc->sb_bits = malloc(num_sb*sizeof(int)); 
rc->sb_qp = malloc(num_sb*sizeof(int));   
rc->target_bits = target_bits;
rc->buffer_level = 1 * target_bits;
rc->buffer_level_init = 1 * target_bits;

int bits_per_sb = rc->target_bits/max(1,rc->num_sb);
int step_size = min(MAX_STEP_SIZE,2048/(max(1,bits_per_sb)));
int qp = max(INTRA_FIXED_QP,stepSize2qp[step_size]);
rc->bits_step_size_sliding_window = rc->target_bits*qp2stepSize[qp];
rc->over_prod_bits = 0;
rc->corr_factor = 1<<8;
for (int i=0;i<rc->num_sb;i++){
rc->sb_bits[i] = bits_per_sb;
rc->sb_qp[i] = qp;    
}


rc->tot_num_bits = 0;
rc->frame_count = 0;
rc->max_num_bits = 0;
rc->min_num_bits = 9999999;
}