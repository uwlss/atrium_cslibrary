<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function atrium_cslibrary_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_csbcr
  $groups['cslibrary-group_csbcr'] = array(
    'group_type' => 'standard',
    'type_name' => 'cslibrary',
    'group_name' => 'group_csbcr',
    'label' => 'Add Case Scenario / Critical Reader',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'Link to your Case Scenarios and Critical Readers.
<a href="http://engage.wisc.edu/software/csb/index.html" target="_blank">More information on Case Scenario / Critical Reader Builder</a>',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'hidden',
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_cscrlink',
    ),
  );

  // Exported group: group_images
  $groups['cslibrary-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'cslibrary',
    'group_name' => 'group_images',
    'label' => 'Add Images',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-3',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_images',
    ),
  );

  // Exported group: group_links
  $groups['cslibrary-group_links'] = array(
    'group_type' => 'standard',
    'type_name' => 'cslibrary',
    'group_name' => 'group_links',
    'label' => 'Add Links',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_links',
    ),
  );

  // Exported group: group_video
  $groups['cslibrary-group_video'] = array(
    'group_type' => 'standard',
    'type_name' => 'cslibrary',
    'group_name' => 'group_video',
    'label' => 'Add Video',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_videolink',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Case Scenario / Critical Reader');
  t('Add Images');
  t('Add Links');
  t('Add Video');

  return $groups;
}
