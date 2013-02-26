<?php
/**
 * @file
 * restrictions_on_movement_within_country.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function restrictions_on_movement_within_country_taxonomy_default_vocabularies() {
  return array(
    'access_constraints_incident_type' => array(
      'name' => 'Access Constraints & Incident Type',
      'machine_name' => 'access_constraints_incident_type',
      'description' => 'Taxonomy to create hierarchy of Access Constariants and Incident Types',
      'hierarchy' => '2',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'purpose_of_administrative_request' => array(
      'name' => 'Purpose of Administrative Request',
      'machine_name' => 'purpose_of_administrative_request',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
