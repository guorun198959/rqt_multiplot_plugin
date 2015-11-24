/******************************************************************************
 * Copyright (C) 2015 by Ralf Kaestner                                        *
 * ralf.kaestner@gmail.com                                                    *
 *                                                                            *
 * This program is free software; you can redistribute it and/or modify       *
 * it under the terms of the Lesser GNU General Public License as published by*
 * the Free Software Foundation; either version 3 of the License, or          *
 * (at your option) any later version.                                        *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the               *
 * Lesser GNU General Public License for more details.                        *
 *                                                                            *
 * You should have received a copy of the Lesser GNU General Public License   *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.       *
 ******************************************************************************/

#ifndef RQT_MULTIPLOT_CURVE_CONFIG_WIDGET_H
#define RQT_MULTIPLOT_CURVE_CONFIG_WIDGET_H

#include <QWidget>

#include <rqt_multiplot/CurveConfig.h>
#include <rqt_multiplot/MessageTopicRegistry.h>
#include <rqt_multiplot/MessageTypeRegistry.h>

namespace Ui {
  class CurveConfigWidget;
};

namespace rqt_multiplot {
  class CurveConfigWidget :
    public QWidget {
  Q_OBJECT
  public:
    CurveConfigWidget(QWidget* parent = 0);
    virtual ~CurveConfigWidget();

    void setConfig(const CurveConfig& config);
    CurveConfig& getConfig();
    const CurveConfig& getConfig() const;
    
  private:
    Ui::CurveConfigWidget* ui_;
    
    CurveConfig* config_;
    
    MessageTopicRegistry* messageTopicRegistry_;
    MessageTypeRegistry* messageTypeRegistry_;
  
  private slots:
    void configTitleChanged(const QString& title);
    
    void lineEditTitleEditingFinished();
  };
};

#endif