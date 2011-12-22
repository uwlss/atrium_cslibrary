<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_cslibrary_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cslibrary_listing';
  $context->description = '';
  $context->tag = 'Library';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'cslibrary' => 'cslibrary',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'cslibrary_listing' => 'cslibrary_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-webform_listing-block_1' => array(
          'module' => 'views',
          'delta' => 'webform_listing-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-taxonomy_overview-block_3' => array(
          'module' => 'views',
          'delta' => 'taxonomy_overview-block_3',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-cslibrary_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'cslibrary_comments-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
    'menu' => 'cslibrary',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Library');
  $export['cslibrary_listing'] = $context;

  return $export;
}
