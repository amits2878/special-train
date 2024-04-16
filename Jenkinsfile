#!/usr/bin/groovy
pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh '/usr/bin/make -f ~/homework/c++/sourcefile/special-train/fraction.mk' 
                archiveArtifacts artifacts: '**/special-train/Fraction.cxx', fingerprint: true 
            }
        }
    }

}
