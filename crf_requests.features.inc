<?php
/**
 * @file
 * crf_requests.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_requests_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crf_requests_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function crf_requests_context_default_contexts_alter(&$data) {
  if (isset($data['sitewide'])) {
    $data['sitewide']->reactions['block']['blocks']['crf_requests-administrator'] = array(
      'module' => 'crf_requests',
      'delta' => 'administrator',
      'region' => 'sidebar_first',
      'weight' => '-31',
    ); /* WAS: '' */
    $data['sitewide']->reactions['block']['blocks']['crf_requests-create_request'] = array(
      'module' => 'crf_requests',
      'delta' => 'create_request',
      'region' => 'sidebar_first',
      'weight' => '-34',
    ); /* WAS: '' */
    $data['sitewide']->reactions['block']['blocks']['crf_requests-legend'] = array(
      'module' => 'crf_requests',
      'delta' => 'legend',
      'region' => 'sidebar_first',
      'weight' => '-30',
    ); /* WAS: '' */
    $data['sitewide']->reactions['block']['blocks']['crf_requests-tools'] = array(
      'module' => 'crf_requests',
      'delta' => 'tools',
      'region' => 'sidebar_first',
      'weight' => '-33',
    ); /* WAS: '' */
    $data['sitewide']->reactions['block']['blocks']['views--exp-requests-page'] = array(
      'module' => 'views',
      'delta' => '-exp-requests-page',
      'region' => 'sidebar_first',
      'weight' => '-32',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_node_info().
 */
function crf_requests_node_info() {
  $items = array(
    'crf_request' => array(
      'name' => t('Request (Clusters)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
