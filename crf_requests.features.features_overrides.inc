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
  $overrides["context.sitewide.reactions|block|blocks|crf_requests-administrator"] = array(
    'module' => 'crf_requests',
    'delta' => 'administrator',
    'region' => 'sidebar_first',
    'weight' => '-34',
  );
  $overrides["context.sitewide.reactions|block|blocks|crf_requests-create_request"] = array(
    'module' => 'crf_requests',
    'delta' => 'create_request',
    'region' => 'sidebar_first',
    'weight' => '-35',
  );
  $overrides["context.sitewide.reactions|block|blocks|crf_requests-legend"] = array(
    'module' => 'crf_requests',
    'delta' => 'legend',
    'region' => 'sidebar_first',
    'weight' => '-31',
  );
  $overrides["context.sitewide.reactions|block|blocks|crf_requests-tools"] = array(
    'module' => 'crf_requests',
    'delta' => 'tools',
    'region' => 'sidebar_first',
    'weight' => '-33',
  );
  $overrides["context.sitewide.reactions|block|blocks|views--exp-requests-page"] = array(
    'module' => 'views',
    'delta' => '-exp-requests-page',
    'region' => 'sidebar_first',
    'weight' => '-32',
  );
  $overrides["context.sitewide.reactions|block|blocks|views-6591e942789040dcb7ecfa46a4e559e0"] = array(
    'module' => 'views',
    'delta' => '6591e942789040dcb7ecfa46a4e559e0',
    'region' => 'sidebar_first',
    'weight' => '-30',
  );

 return $overrides;
}
