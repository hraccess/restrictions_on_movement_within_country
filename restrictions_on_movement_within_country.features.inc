<?php
/**
 * @file
 * restrictions_on_movement_within_country.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restrictions_on_movement_within_country_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function restrictions_on_movement_within_country_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function restrictions_on_movement_within_country_node_info() {
  $items = array(
    'bureaucratic_requirement_within_' => array(
      'name' => t('Restrictions on movement within country'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
