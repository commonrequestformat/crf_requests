<?php
/**
 * @file
 * crf_requests.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crf_requests_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crf';
  $context->description = 'CRF sidewide context';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'crf_requests-create_request' => array(
          'module' => 'crf_requests',
          'delta' => 'create_request',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'crf_requests-administrator' => array(
          'module' => 'crf_requests',
          'delta' => 'administrator',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'crf_requests-view_data' => array(
          'module' => 'crf_requests',
          'delta' => 'view_data',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'crf_requests-tools' => array(
          'module' => 'crf_requests',
          'delta' => 'tools',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'views--exp-requests-page' => array(
          'module' => 'views',
          'delta' => '-exp-requests-page',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'crf_requests-legend' => array(
          'module' => 'crf_requests',
          'delta' => 'legend',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'views-6591e942789040dcb7ecfa46a4e559e0' => array(
          'module' => 'views',
          'delta' => '6591e942789040dcb7ecfa46a4e559e0',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CRF sidewide context');
  $export['crf'] = $context;

  return $export;
}
