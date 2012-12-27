<?php
/**
 * @file
 * crf_requests.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function crf_requests_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.sitewide.reactions|block|blocks|crf_requests-legend"] = array(
    'module' => 'crf_requests',
    'delta' => 'legend',
    'region' => 'sidebar_first',
    'weight' => '-10',
  );

 return $overrides;
}
