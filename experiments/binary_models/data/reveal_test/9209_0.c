static int copy_rules ( apr_pool_t * mp , msre_ruleset * parent_ruleset , msre_ruleset * child_ruleset , apr_array_header_t * exceptions_arr ) {
 copy_rules_phase ( mp , parent_ruleset -> phase_request_headers , child_ruleset -> phase_request_headers , exceptions_arr ) ;
 copy_rules_phase ( mp , parent_ruleset -> phase_request_body , child_ruleset -> phase_request_body , exceptions_arr ) ;
 copy_rules_phase ( mp , parent_ruleset -> phase_response_headers , child_ruleset -> phase_response_headers , exceptions_arr ) ;
 copy_rules_phase ( mp , parent_ruleset -> phase_response_body , child_ruleset -> phase_response_body , exceptions_arr ) ;
 copy_rules_phase ( mp , parent_ruleset -> phase_logging , child_ruleset -> phase_logging , exceptions_arr ) ;
 return 1 ;
 }