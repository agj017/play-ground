import {NavigationContainer} from '@react-navigation/native';
import {createNativeStackNavigator} from '@react-navigation/native-stack';
import React from 'react';
import UploadScreen from './UploadScreen';
import LocationInputScreen from './LocationInputScreen';

const Stack = createNativeStackNavigator();

function UploadStack() {
  return (
    <NavigationContainer>
      <Stack.Navigator initialRouteName="UploadScreen">
        <Stack.Screen name="UploadScreen" component={UploadScreen} />
        <Stack.Screen
          name="LocationInputScreen"
          component={LocationInputScreen}
        />
      </Stack.Navigator>
    </NavigationContainer>
  );
}

export default UploadStack;
