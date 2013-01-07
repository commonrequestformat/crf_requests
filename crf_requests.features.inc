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
  return array("version" => "3.0");
}

/**
 * Implements hook_date_format_types().
 */
function crf_requests_date_format_types() {
  $format_types = array();
  // Exported date format type: request
  $format_types['request'] = 'Request';
  return $format_types;
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
